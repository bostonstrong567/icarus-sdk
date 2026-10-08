// /Game/BP/UI/Components/Projection/BP_TooltipProjectionActor.BP_TooltipProjectionActor_C
// Derives from: AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TooltipProjectionActor_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_VoxelTooltip_C* BP_UIProjectionComponent_VoxelTooltip;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Generic_C* BP_UIProjectionComponent_Generic;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Tooltip_C* BP_UIProjectionComponent_Tooltip;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
};
