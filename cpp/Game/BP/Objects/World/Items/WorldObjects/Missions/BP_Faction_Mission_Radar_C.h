// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Radar.BP_Faction_Mission_Radar_C
// Derives from: ABP_Radarv3_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Radar_C : public ABP_Radarv3_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x07E8, size 0x8

    UFUNCTION(BlueprintCallable) void Activate(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Radar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnHighlightChaned(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAnimalSpawning();
};
