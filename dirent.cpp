

using namespace std;
 
bool isDir(string dir);
void listFiles(string dosyaYolu, bool recursive);
vector pathList;
 
int main()
{
 
    listFiles("C:/image/", true);   //true recursive olarak tarar.
    for(int i=0; i < pathList.size(); i++)
    {
        cout<<pathList[i]<<endl;
    }
 
    getchar();
    return 0;
}
 
bool isDir(string dir)
{
    struct stat fileInfo;
    stat(dir.c_str(), &fileInfo);
    if (S_ISDIR(fileInfo.st_mode)) {
        return true;
    }
    else {
        return false;
    }
}
 
void listFiles(string dosyaYolu, bool recursive)
{
    DIR *dp;
    struct dirent *dirp;
    if ((dp = opendir(dosyaYolu.c_str())) == NULL)
    {
        cout << "Dosya acilamiyor! " << dosyaYolu << "." << endl;       return;     }   else    {       while ((dirp = readdir(dp)) != NULL)        {           if (dirp->d_name != string(".") && dirp->d_name != string(".."))
            {
                if (isDir(dosyaYolu + dirp->d_name) == true && recursive == true)
                {
                    listFiles(dosyaYolu + dirp->d_name +"/", true); // tekrar cagir
                }
                else
                {
                    pathList.push_back(dosyaYolu + dirp->d_name);
                }
            }
        }
        closedir(dp);
    }
}
