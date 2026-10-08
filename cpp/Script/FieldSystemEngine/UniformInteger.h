// /Script/FieldSystemEngine.UniformInteger
// Derives from: UFieldNodeInt > UFieldNodeBase > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UUniformInteger : public UFieldNodeInt
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Magnitude;  // 0x00B0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) UUniformInteger* SetUniformInteger(int32 Magnitude);  // parameters 0x10
};
