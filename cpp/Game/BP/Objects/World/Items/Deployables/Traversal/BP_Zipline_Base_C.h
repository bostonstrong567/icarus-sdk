// /Game/BP/Objects/World/Items/Deployables/Traversal/BP_Zipline_Base.BP_Zipline_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x769, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Zipline_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY() float Lerp_Alpha_F1D9617D465C715D1FB2ED846A1B71B0;  // 0x0738, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Lerp__Direction_F1D9617D465C715D1FB2ED846A1B71B0;  // 0x073C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Lerp;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ZiplineSocket1;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ZiplineSocket2;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ZiplineSocketCentre;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Zipline_Base_C* ClosestOtherZipline;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPaired;  // 0x0768, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Zipline_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDestinationLoc(AActor* Interactor, FVector& DestinationLoc);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void LerpLocation(AActor* Interactor, FVector DestinationLoc);  // parameters 0x14
    UFUNCTION() void Lerp__FinishedFunc();
    UFUNCTION() void Lerp__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
