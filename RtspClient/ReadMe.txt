before run RtspClient ,must export LD_LIBRARY_PATH=./lib

eg:
book@book-desktop:/work/project/rtsp/RtspClient$ export LD_LIBRARY_PATH=./lib
book@book-desktop:/work/project/rtsp/RtspClient$ ./RtspClient


˵����

a��LD_LIBRARY_PATH ������������Ǵ����Ϊ��Ϥ�ģ�������loader������ЩĿ¼�п����ҵ�����⡣�������ö������Ŀ¼����ЩĿ¼֮����ð�ŷָ�����export LD_LIBRARY_PATH=./lib��Ȼ�������б��룬����ͨ�������ַ���ֻ����ʱ�޸�·����������shell���ʧЧ��
�����������ڻ��������ļ�/etc/profile�У���������source /etc/profile ��Ч��source ֻ�ڱ�����̨��Ч��

b��������Ч�ķ���Ϊ�޸Ķ�̬���ӿ������ļ�/etc/ld.so.conf��������/etc/ld.so.conf.d�ﴴ��һ�����ļ���������Ҫ��Ŀ¼�ӵ�����ļ�����巽�����£�(˵���������޸Ķ�̬���ӿ����õķ�ʽ��Ҫʹ�ó����û�Ȩ�ޣ���Ȼû�жԹ���������ļ���дȨ��)