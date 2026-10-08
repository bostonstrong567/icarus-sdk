// /Game/BP/Objects/World/Items/Deployables/Communication/BP_Portable_Beacon.BP_Portable_Beacon_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x795, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Portable_Beacon_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) FLinearColor BeaconColour;  // 0x0738, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 SelectedIconIndex;  // 0x0748, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> SupportedColors;  // 0x0750, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> SupportedIcons;  // 0x0760, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBeaconStyleUpdated BeaconStyleUpdated;  // 0x0770, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 VisibleDistance;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) FName BeaconName;  // 0x0784, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) FName BeaconOwner;  // 0x078C, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool BeaconOwnerOnlySee;  // 0x0794, size 0x1

    UFUNCTION(BlueprintCallable) void BeaconStyleUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Portable_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_BeaconColour();
    UFUNCTION(BlueprintCallable) void OnRep_BeaconName();
    UFUNCTION(BlueprintCallable) void OnRep_BeaconOwner();
    UFUNCTION(BlueprintCallable) void OnRep_BeaconeOwnerOnlySee();
    UFUNCTION(BlueprintCallable) void OnRep_SelectedIconIndex();
    UFUNCTION(BlueprintCallable) void OnRep_VisibleDistance();
    UFUNCTION(BlueprintCallable) void UpdateBeaconStyle();
};
