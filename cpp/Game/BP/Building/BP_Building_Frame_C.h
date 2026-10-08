// /Game/BP/Building/BP_Building_Frame.BP_Building_Frame_C
// Derives from: ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCE8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Frame_C : public ABP_Building_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildup_C* BPC_EnvironmentalBuildup;  // 0x0C50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0C58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane5;  // 0x0C60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane4;  // 0x0C68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane3;  // 0x0C70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane2;  // 0x0C78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane1;  // 0x0C80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane;  // 0x0C88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TopOrBottomHit;  // 0x0C90, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TopHit;  // 0x0C91, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Bottomhit;  // 0x0C92, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ABP_Building_Base_C*, int32> RemoteAnchorBuildingDistanceMap;  // 0x0C98, size 0x50

    UFUNCTION(BlueprintCallable) void ApplySoftHeightLimits();
    UFUNCTION(BlueprintCallable) void CalculateDistanceToRealAnchor();
    UFUNCTION(BlueprintCallable) void CombineRemoteAnchorDistanceMaps(ABP_Building_Base_C* OtherBuilding);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Building_Frame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 ExtraSoftHeightCalc();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrabLowerAnchorBaseReferences();
    UFUNCTION(BlueprintCallable) void InitAnchorStability();
    UFUNCTION(BlueprintCallable, BlueprintPure) void OptionallyRotateCenterUpToInpactNormal(FVector HitNormal, FRotator& CenterWorldRotation, FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void ReinitAllAbove();
    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
    UFUNCTION(BlueprintCallable) void SpreadAnchorBaseReferencesUp();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void StartDestruction(AIcarusPlayerController* TriggeringPlayer, EBuildingDestroyReason DestroyReason);  // parameters 0x9
};
