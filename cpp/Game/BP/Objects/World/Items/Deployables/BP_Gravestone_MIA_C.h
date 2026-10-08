// /Game/BP/Objects/World/Items/Deployables/BP_Gravestone_MIA.BP_Gravestone_MIA_C
// Derives from: ABP_Gravestone_C > AGravestoneBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gravestone_MIA_C : public ABP_Gravestone_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x08D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Gravestone_MIA(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleAssignedPlayer();
};
