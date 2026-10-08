// /Game/BP/Objects/World/Items/Deployables/Communication/BP_Trail_Beacon.BP_Trail_Beacon_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x764, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trail_Beacon_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* EmissiveMat;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBeaconStyleUpdated BeaconStyleUpdated;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* PreviousBeaconActor;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 PreviousBeaconActorUID;  // 0x0760, size 0x4

    UFUNCTION(BlueprintCallable) void BeaconStyleUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Trail_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindPreviousBeaconActor(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_BeaconColour();
    UFUNCTION(BlueprintCallable) void OnRep_SelectedIconIndex();
    UFUNCTION(BlueprintCallable) void UpdateBeaconStyle();
    UFUNCTION(BlueprintCallable) void UpdatePreviousBeaconActor(AActor* PreviousBeaconActor);  // parameters 0x8
};
