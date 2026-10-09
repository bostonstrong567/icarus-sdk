// /Script/LevelSequence.LevelSequenceBindingReference
// size 0x38, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceBindingReference.h

USTRUCT()
struct FLevelSequenceBindingReference
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Deprecated) FString PackageName;  // 0x0000, size 0x10
    UPROPERTY() FSoftObjectPath ExternalObjectPath;  // 0x0010, size 0x18
    UPROPERTY() FString ObjectPath;  // 0x0028, size 0x10
};
