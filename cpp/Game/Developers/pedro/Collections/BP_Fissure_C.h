// /Game/Developers/pedro/Collections/BP_Fissure.BP_Fissure_C
// Derives from: AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fissure_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Node_SuperCooledIce1;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY() float EmissionExplodetimeline_NewTrack_0_18A55A244D31B5598669818705DD169A;  // 0x0240, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> EmissionExplodetimeline__Direction_18A55A244D31B5598669818705DD169A;  // 0x0244, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* EmissionExplodetimeline;  // 0x0248, size 0x8
    UPROPERTY() float EmissionTimeline_EmissionFadeOut_39187FDB4480A6309F5C30989DBD9821;  // 0x0250, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> EmissionTimeline__Direction_39187FDB4480A6309F5C30989DBD9821;  // 0x0254, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* EmissionTimeline;  // 0x0258, size 0x8
    UPROPERTY() float OpacityTimeline_Opacity_7935BDA94BF1906A24E6CEA5C64CC129;  // 0x0260, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> OpacityTimeline__Direction_7935BDA94BF1906A24E6CEA5C64CC129;  // 0x0264, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* OpacityTimeline;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Z_Offset;  // 0x0270, size 0x4, named "Z Offset"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Points;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D DelayRange;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Increments;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* spline;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Array_Index;  // 0x02A0, size 0x4, named "Array Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Return_Value_X__Roll_;  // 0x02A4, size 0x4, named "Return Value X (Roll)"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* MaterialInstance;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> FissureMeshes;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* FissureMaterial;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D XYOffset;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UNiagaraComponent*> ExplosionNiagara;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UNiagaraComponent*> IdleNiagara;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExplosionDamageRadius;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExplosionDamage;  // 0x02F4, size 0x4

    UFUNCTION(BlueprintCallable) void DestroyFissure();
    UFUNCTION() void EmissionExplodetimeline__FinishedFunc();
    UFUNCTION() void EmissionExplodetimeline__UpdateFunc();
    UFUNCTION() void EmissionTimeline__FinishedFunc();
    UFUNCTION() void EmissionTimeline__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_Fissure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExplodeFissure();
    UFUNCTION() void OpacityTimeline__FinishedFunc();
    UFUNCTION() void OpacityTimeline__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Start();
    UFUNCTION(BlueprintCallable) void StopTimelines();
};
