// /Script/CoreUObject.SoftObjectPath
// size 0x18, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/SoftObjectPath.h

USTRUCT()
struct FSoftObjectPath
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FName AssetPathName;  // 0x0000, size 0x8
    UPROPERTY() FString SubPathString;  // 0x0008, size 0x10
};
