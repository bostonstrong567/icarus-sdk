// /Game/ASS/ENV/RCK/SM_LC_Rocks/LC_GeoTherm/BP_Geothermal.BP_Geothermal_C
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x3F1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Geothermal_C : public AWaterBody
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_GeoSteam;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RVTPlaneMid;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RVTPlaneTop;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* OverlapAudio;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WaterPlane;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> Meshes;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Type;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> WaterScale;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Clearness;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NormalFlatness;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x03BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RapidsIntensity;  // 0x03C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeNoise;  // 0x03C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> RVTScaleTop;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> RVTScaleMid;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WaterPlaneMeshSize;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinToMaxDistScale;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Write_To_RVT;  // 0x03F0, size 0x1, named "Write To RVT"

    UFUNCTION() void ExecuteUbergraph_BP_Geothermal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintCallable) void InitializeAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetProperties(UPrimitiveComponent* NewParam, float Clearness);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
