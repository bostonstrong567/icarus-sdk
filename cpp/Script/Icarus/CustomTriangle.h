// /Script/Icarus.CustomTriangle
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, declared in Icarus/Source/Icarus/UI/Polygons/CustomTriangle.h

UCLASS(EditInlineNew)
class UCustomTriangle : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D P0;  // 0x0264, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D P1;  // 0x026C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D P2;  // 0x0274, size 0x8

    UFUNCTION(BlueprintCallable) void MakeTriangle(FColor NewColor, FVector2D NewP0, FVector2D NewP1, FVector2D NewP2);  // parameters 0x1C
};
