// /Game/BP/AI/Basic/Caves/BP_WildBeeHive_Tree.BP_WildBeeHive_Tree_C
// Derives from: ABP_WildBeeHive_C > ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x410, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WildBeeHive_Tree_C : public ABP_WildBeeHive_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* P_Wood;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* P_WoodChips;  // 0x0408, size 0x8

    UFUNCTION(BlueprintCallable) void OnDestroyedStateUpdated();
};
