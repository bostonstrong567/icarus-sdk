// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Seismic_Probe.BP_Seismic_Probe_C
// Derives from: ABP_Powered_Faction_Mission_Deployable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seismic_Probe_C : public ABP_Powered_Faction_Mission_Deployable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ScanAudio;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Radar_Top_D_NoWire;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Radar_Head_B_NoWire;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bScanComplete;  // 0x0768, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GH_DenEntrance_RockGolem_C* ProbeTarget;  // 0x0770, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Seismic_Probe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void ToggleAudio();
};
