// /Script/FieldSystemEngine.RandomVector
// Derives from: UFieldNodeVector > UFieldNodeBase > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class URandomVector : public UFieldNodeVector
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) URandomVector* SetRandomVector(float Magnitude);  // parameters 0x10
};
