// /Script/LevelSequence.LevelSequenceObject
// size 0x38, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceObject.h

USTRUCT()
struct FLevelSequenceObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TLazyObjectPtr<UObject> ObjectOrOwner;  // 0x0000, size 0x1C
    UPROPERTY() FString ComponentName;  // 0x0020, size 0x10
    UPROPERTY(Transient) TWeakObjectPtr<UObject> CachedComponent;  // 0x0030, size 0x8
};
