#define Pi 3.14159265358979323846

class CSolid
{
	public:
		virtual double Volume() const  = 0;
		virtual double Surface_Area() const = 0;

		virtual void Show_Info() const = 0;

		virtual ~CSolid()
		{}
};

class CBall : public CSolid
{
	private:
		double m_Radius;

	public:
		virtual double Volume() const;
		virtual double Surface_Area() const;

		virtual void Show_Info() const;

		CBall(double R = 1.0) :
			m_Radius(R)
		{}
};

class CRectParallelepiped : public CSolid
{
	private:
		double m_Length;
		double m_Width;
		double m_Height;

	public:
		virtual double Volume() const;
		virtual double Surface_Area() const;

		virtual void Show_Info() const;

		CRectParallelepiped(double a = 1.0, double b = 1.0, double c = 1.0) : 
			m_Length(a), m_Width(b), m_Height(c)
		{}
};
