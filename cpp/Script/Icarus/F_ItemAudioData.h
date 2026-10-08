// /Script/Icarus.ItemAudioData
// size 0x2C0, declared in Icarus/Source/Icarus/DataStructs/Audio/ItemAudioData.h

USTRUCT()
struct FItemAudioData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PickUpSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DropSound;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> HitSound;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DamagedSound;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BrokenSound;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> UseWhenBrokenSound;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> RepairedSound;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DestroyedSound;  // 0x0130, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> SlottedSound;  // 0x0158, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> ConsumedSound;  // 0x0180, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> ConsumeFailedSound;  // 0x01A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> ConsumableExpiredSound;  // 0x01D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BackpackSound;  // 0x01F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BackpackFootstepSound;  // 0x0220, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> WeatherSound;  // 0x0248, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FItemAudioAnimData> AnimSounds;  // 0x0270, size 0x50
};
