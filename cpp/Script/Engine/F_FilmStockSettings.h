// /Script/Engine.FilmStockSettings
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FFilmStockSettings
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Slope;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Toe;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Shoulder;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlackClip;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float WhiteClip;  // 0x0010, size 0x4
};
