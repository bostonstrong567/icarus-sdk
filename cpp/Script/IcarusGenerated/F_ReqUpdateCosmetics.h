// /Script/IcarusGenerated.ReqUpdateCosmetics
// size 0x98, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateCosmetics.h

USTRUCT()
struct FReqUpdateCosmetics
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics CharacterCosmeticsData;  // 0x0014, size 0x80
};
