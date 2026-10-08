// /Game/ASS/VFX/BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FX_LocalFogVolume_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FX_LocalFogVolume(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetActivated();
    UFUNCTION(BlueprintCallable) void SetDeactivated();
};
