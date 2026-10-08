// /Game/ASS/VFX/SHU/BP_ScorchDecal.BP_ScorchDecal_C
// Derives from: AActor > UObject
// size 0x250, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ScorchDecal_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RVT;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY() float FadeIn_Fade_3955FBF44E677FA5935C558A825C9787;  // 0x0240, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeIn__Direction_3955FBF44E677FA5935C558A825C9787;  // 0x0244, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeIn;  // 0x0248, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ScorchDecal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FadeIn__FinishedFunc();
    UFUNCTION() void FadeIn__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
