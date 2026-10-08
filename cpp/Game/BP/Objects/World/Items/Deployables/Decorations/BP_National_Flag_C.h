// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_National_Flag.BP_National_Flag_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_National_Flag_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlagRustleAudio;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* HorizontalFlag;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FNationalFlagsRowHandle NationalFlag;  // 0x0748, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_National_Flag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnLoaded_7CD21EDE421AF642C88B029595B13F43(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_NationalFlag();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateFlag();
};
