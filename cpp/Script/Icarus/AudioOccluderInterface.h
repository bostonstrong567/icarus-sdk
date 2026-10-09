// /Script/Icarus.AudioOccluderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOccluderInterface.h

UCLASS(Abstract)
class UAudioOccluderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) float GetOcclusionValue() const;  // parameters 0x4
};
