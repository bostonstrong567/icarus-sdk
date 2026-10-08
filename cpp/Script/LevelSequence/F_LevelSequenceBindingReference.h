// /Script/LevelSequence.LevelSequenceBindingReference
// size 0x38, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceBindingReference.h

USTRUCT()
struct FLevelSequenceBindingReference
{
    UPROPERTY(Deprecated) FString PackageName;  // 0x0000, size 0x10
    UPROPERTY() FSoftObjectPath ExternalObjectPath;  // 0x0010, size 0x18
    UPROPERTY() FString ObjectPath;  // 0x0028, size 0x10
};
