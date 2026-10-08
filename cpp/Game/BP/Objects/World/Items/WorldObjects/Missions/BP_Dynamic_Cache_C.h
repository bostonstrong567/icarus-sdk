// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Dynamic_Cache.BP_Dynamic_Cache_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dynamic_Cache_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool Initialised;  // 0x0360, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector NewVar_0;  // 0x0364, size 0xC

    UFUNCTION() void ExecuteUbergraph_BP_Dynamic_Cache(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ReRun();
};
