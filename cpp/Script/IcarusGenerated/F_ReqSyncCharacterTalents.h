// /Script/IcarusGenerated.ReqSyncCharacterTalents
// size 0x28, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqSyncCharacterTalents.h

USTRUCT()
struct FReqSyncCharacterTalents
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacterSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x0018, size 0x10
};
