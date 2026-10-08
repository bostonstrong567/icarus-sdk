// /Script/IcarusGenerated.ReqUpdateCosmetics
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/UpdateCosmeticsCallbackProxyGen.generated.h

USTRUCT()
struct FReqUpdateCosmetics
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics CharacterCosmeticsData;  // 0x0014, size 0x60
};
