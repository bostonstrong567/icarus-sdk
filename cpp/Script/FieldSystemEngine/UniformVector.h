// /Script/FieldSystemEngine.UniformVector
// Derives from: UFieldNodeVector > UFieldNodeBase > UActorComponent > UObject
// size 0xC0, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UUniformVector : public UFieldNodeVector
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Direction;  // 0x00B4, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) UUniformVector* SetUniformVector(float Magnitude, FVector Direction);  // parameters 0x18
};
