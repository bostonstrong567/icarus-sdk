// /Script/Strider.StriderMath
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/StriderMath.h

UCLASS()
class UStriderMath : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static float AngleBetween(const FVector& A, const FVector& B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static float CalculateStrideScale(float TotalSpeedScale, float PlayRate);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static float GetAngleDelta(float StartAngle, float EndAngle);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetNextCardinalDirection(int32 CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static float GetRotationRelativeToVelocity(AActor* Actor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void MoveComponentsToward(FVector& InStart, const FVector& End, float MaxDelta);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static float MoveToward(float Start, float End, float MaxDelta);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void MoveTowardVector(FVector& InStart, const FVector& End, float MaxDelta);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static float WrapAngle(float Angle);  // parameters 0x8
};
