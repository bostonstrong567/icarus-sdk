// /Script/FieldSystemEngine.UniformScalar
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UUniformScalar : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) UUniformScalar* SetUniformScalar(float Magnitude);  // parameters 0x10
};
