// /Game/BP/Audio/Hab/BP_DioramaAmbientAudio.BP_DioramaAmbientAudio_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DioramaAmbientAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* Ambience;  // 0x0230, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DioramaAmbientAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
