// /Script/IcarusGenerated.ReqUpdateCharacterLoadout
// size 0x150, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateCharacterLoadout.h

USTRUCT()
struct FReqUpdateCharacterLoadout
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterLoadout Loadout;  // 0x0018, size 0x138
};
