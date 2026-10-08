// /Script/DragonIKPlugin.DragonIK_Library
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

UCLASS()
class UDragonIK_Library : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool Lock_Forward_Axis;  // 0x0028

    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator CustomLookRotation(FVector lookAt, FVector upDirection);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator LookAtRotation_V3(FVector source, FVector target, FVector upvector);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget);  // parameters 0x70
};
