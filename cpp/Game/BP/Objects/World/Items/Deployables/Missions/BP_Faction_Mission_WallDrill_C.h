// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Faction_Mission_WallDrill.BP_Faction_Mission_WallDrill_C
// Derives from: ABP_Powered_Faction_Mission_Deployable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x75A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_WallDrill_C : public ABP_Powered_Faction_Mission_Deployable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Extractor_Audio;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriggeredCleanup;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DrillActive;  // 0x0759, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_WallDrill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeviceFullyPowered();
    UFUNCTION(BlueprintCallable) void OnDeviceNotFullyPowered();
    UFUNCTION(BlueprintCallable) void TriggerCleanup();
    UFUNCTION(BlueprintCallable) void UpdateDrillState(bool DrillOn);  // parameters 0x1
};
