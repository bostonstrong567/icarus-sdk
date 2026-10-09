// /Script/Engine.ReporterBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Debug/ReporterBase.h

UCLASS(Abstract)
class UReporterBase : public UObject
{
public:
    bool bVisible;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   Draw, ToScreenSpace
};
