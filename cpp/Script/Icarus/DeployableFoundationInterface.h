// /Script/Icarus.DeployableFoundationInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Objects/DeployableFoundationInterface.h

UCLASS(Abstract)
class UDeployableFoundationInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) void AddAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void RemoveAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
};
