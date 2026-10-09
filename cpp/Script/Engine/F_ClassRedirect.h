// /Script/Engine.ClassRedirect
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FClassRedirect
{
public:
    UPROPERTY() FName ObjectName;  // 0x0000, size 0x8
    UPROPERTY() FName OldClassName;  // 0x0008, size 0x8
    UPROPERTY() FName NewClassName;  // 0x0010, size 0x8
    UPROPERTY() FName OldSubobjName;  // 0x0018, size 0x8
    UPROPERTY() FName NewSubobjName;  // 0x0020, size 0x8
    UPROPERTY() FName NewClassClass;  // 0x0028, size 0x8
    UPROPERTY() FName NewClassPackage;  // 0x0030, size 0x8
    UPROPERTY() bool InstanceOnly;  // 0x0038, size 0x1
};
