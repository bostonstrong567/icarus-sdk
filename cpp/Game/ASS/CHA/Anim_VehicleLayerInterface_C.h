// /Game/ASS/CHA/Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C
// Derives from: UAnimLayerInterface > UInterface > UObject
// size 0x28, a blueprint class, anim

UCLASS(Config=Engine)
class UAnim_VehicleLayerInterface_C : public UAnimLayerInterface
{
public:

    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
