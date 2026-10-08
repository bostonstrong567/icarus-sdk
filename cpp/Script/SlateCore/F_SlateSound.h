// /Script/SlateCore.SlateSound
// size 0x18, declared in Engine/Source/Runtime/SlateCore/Public/Sound/SlateSound.h

USTRUCT()
struct FSlateSound
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* ResourceObject;  // 0x0000, size 0x8

    // Not reflected:
    FName LegacyResourceName_DEPRECATED;  // 0x0008
    TWeakObjectPtr<UObject,FWeakObjectPtr> LegacyResourceObject_DEPRECATED;  // 0x0010
};
