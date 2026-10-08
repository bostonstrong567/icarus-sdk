// /Game/ASS/VFX/BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
// Derives from: AActor > UObject
// size 0x260, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FX_ShelterCapture_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* ShelterCaptureComponent;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Show_Only_Actors;  // 0x0238, size 0x10, named "Show Only Actors"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RefreshActorListTimer;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> StaticShowOnlyActors;  // 0x0250, size 0x10

    UFUNCTION(BlueprintCallable) void CaptureScene();
    UFUNCTION() void ExecuteUbergraph_BP_FX_ShelterCapture(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
