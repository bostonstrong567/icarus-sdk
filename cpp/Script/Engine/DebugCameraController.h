// /Script/Engine.DebugCameraController
// Derives from: APlayerController > AController > AActor > UObject
// size 0x690, declared in Engine/Source/Runtime/Engine/Classes/Engine/DebugCameraController.h

UCLASS(NotPlaceable, Config=Game)
class ADebugCameraController : public APlayerController
{
public:
    UPROPERTY(Config) uint8 bShowSelectedInfo : 1;  // 0x0590, mask 0x01
    UPROPERTY() uint8 bIsFrozenRendering : 1;  // 0x0590, mask 0x02
    UPROPERTY() uint8 bIsOrbitingSelectedActor : 1;  // 0x0590, mask 0x04
    UPROPERTY() uint8 bOrbitPivotUseCenter : 1;  // 0x0590, mask 0x08
    UPROPERTY() uint8 bEnableBufferVisualization : 1;  // 0x0590, mask 0x10
    UPROPERTY() uint8 bEnableBufferVisualizationFullMode : 1;  // 0x0590, mask 0x20
    UPROPERTY() uint8 bIsBufferVisualizationInputSetup : 1;  // 0x0590, mask 0x40
    UPROPERTY() uint8 bLastDisplayEnabled : 1;  // 0x0590, mask 0x80
    UPROPERTY(Instanced) UDrawFrustumComponent* DrawFrustum;  // 0x0598, size 0x8
    UPROPERTY() AActor* SelectedActor;  // 0x05A0, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* SelectedComponent;  // 0x05A8, size 0x8
    UPROPERTY() FHitResult SelectedHitPoint;  // 0x05B0, size 0x88
    UPROPERTY() APlayerController* OriginalControllerRef;  // 0x0638, size 0x8
    UPROPERTY() UPlayer* OriginalPlayer;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SpeedScale;  // 0x0648, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InitialMaxSpeed;  // 0x064C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InitialAccel;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InitialDecel;  // 0x0654, size 0x4
private:
    FVector2D LastTouchDragLocation;  // 0x0658, not reflected
    FVector LastOrbitPawnLocation;  // 0x0660, not reflected
    FVector OrbitPivot;  // 0x066C, not reflected
    float OrbitRadius;  // 0x0678, not reflected
    int32 LastViewModeSettingsIndex;  // 0x067C, not reflected
    FString CurrSelectedBuffer;  // 0x0680, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetSelectedActor() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveOnActivate(APlayerController* OriginalPC);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveOnActorSelected(AActor* NewSelectedActor, const FVector& SelectHitLocation, const FVector& SelectHitNormal, const FHitResult& Hit);  // parameters 0xA8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveOnDeactivate(APlayerController* RestoredPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPawnMovementSpeedScale(float NewSpeedScale);  // parameters 0x4
    UFUNCTION(Exec) void ShowDebugSelectedInfo();
    UFUNCTION(BlueprintCallable) void ToggleDisplay();

    // Virtual functions that start here:
    //   ApplySpeedScale, OnActivate, OnDeactivate, Select, ShowDebugSelectedInfo, ToggleFreezeRendering
};
