// /Script/IcarusUtilities.LessInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/Public/LessInterface.h

UCLASS(Abstract)
class ULessInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool LessThan(UObject* Other) const;  // parameters 0x9
};
