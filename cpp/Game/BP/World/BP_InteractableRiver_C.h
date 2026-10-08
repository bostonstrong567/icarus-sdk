// /Game/BP/World/BP_InteractableRiver.BP_InteractableRiver_C
// Derives from: ARiver > AWaterBody > AIcarusActor > AActor > UObject
// size 0x3F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InteractableRiver_C : public ARiver
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_RiverAudioComponent_C* RiverAudio;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRiverSplineSetup> List;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ReverseFlow;  // 0x0398, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBasicSplinePoint> LeftSplinePoints;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBasicSplinePoint> RightSplinePoints;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* LeftEdgeSpline;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* RightEdgeSpline;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) UMaterialInterface* OverrideMaterial;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRiverAudioDataRowHandle AudioSetup;  // 0x03D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LavaLights;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LavaLightGap;  // 0x03F4, size 0x4

    UFUNCTION(BlueprintCallable) void AddEdgeSplinePoint(USplineComponent* Spline, FVector Location, FRotator Rotation, TEnumAsByte<ESplinePointType> Type);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void AddLavaLights();
    UFUNCTION(BlueprintCallable) void CreateEdgeSplines();
    UFUNCTION(BlueprintCallable, BlueprintPure) void EdgeSplinesAreValid(bool& Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FinaliseEdgeSplines();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UPrimitiveComponent*> GetNavAffectingComponents() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UStaticMesh* GetRiverMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void SetInteractableType();
    UFUNCTION(BlueprintCallable) void UpdateTextRenderer(UTextRenderComponent* TextRenderer, float ZoneQuality);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
