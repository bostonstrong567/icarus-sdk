// /Script/CoreUObject.SoftObjectPath
// size 0x18, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/SoftObjectPath.h

USTRUCT()
struct FSoftObjectPath
{
    UPROPERTY() FName AssetPathName;  // 0x0000, size 0x8
    UPROPERTY() FString SubPathString;  // 0x0008, size 0x10
};
