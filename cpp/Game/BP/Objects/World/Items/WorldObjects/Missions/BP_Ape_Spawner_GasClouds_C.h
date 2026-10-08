// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Spawner_GasClouds.BP_Ape_Spawner_GasClouds_C
// Derives from: ABP_Ape_Spawner_C > ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x640, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Spawner_GasClouds_C : public ABP_Ape_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Ape_GasCloud_Spawner;  // 0x0630, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle OverlapTimer;  // 0x0638, size 0x8

    UFUNCTION(BlueprintCallable) void CheckOverlaps();
    UFUNCTION(BlueprintCallable) void DestroyUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_Ape_Spawner_GasClouds(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void TargetPlayer(AActor* TargetActor);  // parameters 0x8
};
