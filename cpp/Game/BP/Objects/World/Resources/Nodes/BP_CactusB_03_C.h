// /Game/BP/Objects/World/Resources/Nodes/BP_CactusB_03.BP_CactusB_03_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x3CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CactusB_03_C : public ABP_ResourceNodeBase_C
{
public:
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
};
