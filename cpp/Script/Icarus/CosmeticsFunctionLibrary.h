// /Script/Icarus.CosmeticsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Cosmetics/CosmeticsFunctionLibrary.h

UCLASS()
class UCosmeticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 CountFaceShapes(EFaceTypes Top, EFaceTypes Bottom, EFaceTypes Left, EFaceTypes Right);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D FaceBlendToPickerPosition(float Top, float Bottom, float Left, float Right, float Scaled, float AbsClamp, float Baseline);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindFaceShapeDirection(EFaceTypes Shape, EFaceDirection Direction, EFaceTypes Top, EFaceTypes Bottom, EFaceTypes Left, EFaceTypes Right, EFaceDirection& OtherDirection);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool IsDLCPackageInstalled(FDLCPackageDataRowHandle DLCPackage);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void LogDLCInfo();
};
