// /Script/Icarus.CropPlotFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Deployables/CropPlotFunctionLibrary.h

UCLASS()
class UCropPlotFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CheckOutdoorsAndGreenhouse(ADeployable* CropPlot, FVector OutsideTestPushoutAmount, float GreenhouseTestRadius, bool& bIsOutdoors, int32& GreenhousePieceCount);  // parameters 0x20
};
