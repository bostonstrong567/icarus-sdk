// /Game/BP/World/HollowTrunks/BP_HollowTrunk.BP_HollowTrunk_C
// Derives from: AActor > UObject
// size 0x23C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HollowTrunk_C : public AActor, public IAudioOccluderInterface, public IAudioShelterInterface, public IAudioReflectorInterface
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AudioOcclusionValue;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinAudioShelterValue;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSurfaceAudioReflectionData AudioReflectionValue;  // 0x0230, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetAudioShelterValue(AIcarusPlayerCharacter* Player) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetOcclusionValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FSurfaceAudioReflectionData GetReflectionValue() const;  // parameters 0xC
};
