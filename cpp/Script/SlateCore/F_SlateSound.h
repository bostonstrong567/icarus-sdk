// /Script/SlateCore.SlateSound
// size 0x18, declared in Engine/Source/Runtime/SlateCore/Public/Sound/SlateSound.h

USTRUCT()
struct FSlateSound
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* ResourceObject;  // 0x0000, size 0x8
    FName LegacyResourceName_DEPRECATED;  // 0x0008, not reflected
    TWeakObjectPtr<UObject,FWeakObjectPtr> LegacyResourceObject_DEPRECATED;  // 0x0010, not reflected
};
